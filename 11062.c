 RestyleManager::DebugVerifyStyleTree(nsIFrame* aFrame) if ( aFrame )  nsStyleContext * context = aFrame -> StyleContext ( ) ; nsStyleContext * parentContext = context -> GetParent ( ) ; VerifyStyleTree ( mPresContext , aFrame , parentContext ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; for (; !lists.IsDone(); lists.Next()) nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; for (; !childFrames.AtEnd(); childFrames.Next()) nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  VerifyContextParent ( aPresContext , child , nullptr , nullptr ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); if ( ! aParentContext )  nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; if ( providerFrame )  aParentContext = providerFrame -> StyleContext ( ); nsStyleContext * actualParentContext = aContext -> GetParent ( ) ; if ( aParentContext )  if ( actualParentContext )  DumpContext ( nullptr , actualParentContext ); static DumpContext(nsIFrame* aFrame, nsStyleContext* aContext) if ( aFrame )  fprintf ( stdout , " (%p)" , static_cast < void * > ( aFrame ) ) if ( aContext )  fprintf ( stdout , " style: %p " , static_cast < void * > ( aContext ) ) nsIAtom * pseudoTag = aContext -> GetPseudo ( ) ; if ( pseudoTag )  nsAutoString buffer ; fputs ( NS_LossyConvertUTF16toASCII ( buffer ) . get ( ) , stdout ); 