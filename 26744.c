bool closeLoop(MBasicBlock* loopEntry, MBasicBlock* afterLoop) ParseNode * pn = popLoop ( ) ; ParseNode* popLoop() ParseNode * pn = loopStack_ . popCopy ( ) ; return pn ; if ( ! loopEntry )  if ( curBlock_ )  if ( ! loopEntry -> setBackedgeAsmJS ( curBlock_ ) )  return bindUnlabeledBreaks ( pn ) ; bool bindUnlabeledBreaks(ParseNode* pn) if ( p )  if ( ! bindBreaksOrContinues ( & p -> value ( ) , & createdJoinBlock , pn ) )  bool bindBreaksOrContinues(BlockVector* preds, bool* createdJoinBlock, ParseNode* pn) for (unsigned i = 0; i < preds->length(); i++) MBasicBlock * pred = ( * preds ) [ i ] ; if ( * createdJoinBlock )  if ( ! curBlock_ -> addPredecessor ( alloc ( ) , pred ) )  MBasicBlock * next ; if ( ! newBlock ( pred , & next , pn ) )  if ( curBlock_ )  curBlock_ -> end ( MGoto :: New ( alloc ( ) , next ) ); if ( ! next -> addPredecessor ( alloc ( ) , curBlock_ ) )  curBlock_ = next; * createdJoinBlock = true; if ( ! mirGen_ -> ensureBallast ( ) )  