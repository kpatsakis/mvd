 RestyleManager::ReparentStyleContext(nsIFrame* aFrame) nsStyleContext * oldContext = aFrame -> StyleContext ( ) ; nsRefPtr < nsStyleContext > newContext ; nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; bool isChild = providerFrame && providerFrame -> GetParent ( ) == aFrame ; nsStyleContext * newParentContext = nullptr ; if ( isChild )  newParentContext = providerFrame -> StyleContext ( ); if ( providerFrame )  newParentContext = providerFrame -> StyleContext ( ); nsIFrame * prevContinuation = GetPrevContinuationWithPossiblySameStyle ( aFrame ) ; nsStyleContext * prevContinuationContext ; bool copyFromContinuation = prevContinuation && ( prevContinuationContext = prevContinuation -> StyleContext ( ) ) -> GetPseudo ( ) == oldContext -> GetPseudo ( ) && prevContinuationContext -> GetParent ( ) == newParentContext ; if ( copyFromContinuation )  newContext = prevContinuationContext; nsIFrame * parentFrame = aFrame -> GetParent ( ) ; Element * element = ElementForStyleContext ( parentFrame ? parentFrame -> GetContent ( ) : nullptr , aFrame , oldContext -> GetPseudoType ( ) ) ; nsIContent * pseudoElementContent = aFrame -> GetContent ( ) ; Element * pseudoElement = ( pseudoElementContent && pseudoElementContent -> IsElement ( ) ) ? pseudoElementContent -> AsElement ( ) : nullptr ; newContext = mPresContext -> StyleSet ( ) -> ReparentStyleContext ( oldContext , newParentContext , element , pseudoElement ); if ( newContext )  if ( newContext != oldContext )  VerifyStyleTree ( mPresContext , aFrame , newParentContext ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsIFrame :: ChildListIterator lists ( aFrame ) ; for (; !lists.IsDone(); lists.Next()) nsFrameList :: Enumerator childFrames ( lists . CurrentList ( ) ) ; for (; !childFrames.AtEnd(); childFrames.Next()) nsIFrame * child = childFrames . get ( ) ; if ( ! ( child -> GetStateBits ( ) & NS_FRAME_OUT_OF_FLOW ) )  if ( nsGkAtoms :: placeholderFrame == child -> GetType ( ) )  VerifyContextParent ( aPresContext , child , nullptr , nullptr ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); if ( ! aParentContext )  nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; if ( providerFrame )  aParentContext = providerFrame -> StyleContext ( ); nsStyleContext * actualParentContext = aContext -> GetParent ( ) ; if ( aParentContext )  if ( aParentContext != actualParentContext )  if ( aContext == aParentContext )  DumpContext ( nullptr , actualParentContext ); static DumpContext(nsIFrame* aFrame, nsStyleContext* aContext) if ( aFrame )  nsAutoString name ; fputs ( NS_LossyConvertUTF16toASCII ( name ) . get ( ) , stdout ); 