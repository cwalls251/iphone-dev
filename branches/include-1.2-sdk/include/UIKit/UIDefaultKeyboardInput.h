/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKeyboardInputProtocol.h"

@class UITextTraits;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput>
{
    UITextTraits *m_traits;
}

- (struct CGRect)caretRect;	// IMP=0x324a98ac
- (unsigned short)characterAfterCaretSelection;	// IMP=0x324a97d8
- (unsigned short)characterBeforeCaretSelection;	// IMP=0x324a97d0
- (unsigned short)characterInRelationToCaretSelection:(int)fp8;	// IMP=0x324a97c8
- (struct CGRect)convertCaretRect:(struct CGRect)fp8;	// IMP=0x324a98cc
- (void)dealloc;	// IMP=0x324a958c
- (void)deleteBackward;	// IMP=0x324a97b0
- (id)editingDelegate;	// IMP=0x324a9900
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// IMP=0x324a9834
- (struct __GSFont *)fontForCaretSelection;	// IMP=0x324a97e0
- (void)forwardInvocation:(id)fp8;	// IMP=0x324a9690
- (BOOL)hasSelection;	// IMP=0x324a9850
- (void)insertText:(id)fp8;	// IMP=0x324a97b4
- (BOOL)isProxyFor:(id)fp8;	// IMP=0x324a9918
- (BOOL)isSecure;	// IMP=0x324a990c
- (BOOL)isShowingPlaceholder;	// IMP=0x324a98f4
- (id)keyboardInputView;	// IMP=0x324a98f0
- (void)markCurrentWordForAutoCorrection:(id)fp8 correction:(id)fp12;	// IMP=0x324a9888
- (id)markedText;	// IMP=0x324a97c0
- (id)methodSignatureForSelector:(SEL)fp8;	// IMP=0x324a974c
- (void)moveBackward:(unsigned int)fp8;	// IMP=0x324a988c
- (void)moveForward:(unsigned int)fp8;	// IMP=0x324a9890
- (id)previousNGrams:(unsigned int)fp8;	// IMP=0x324a9848
- (BOOL)rangeAtSentenceStart:(id)fp8;	// IMP=0x324a9870
- (struct CGRect)rectContainingCaretSelection;	// IMP=0x324a97fc
- (void)replaceCurrentWordWithText:(id)fp8;	// IMP=0x324a97b8
- (void)selectAll;	// IMP=0x324a9894
- (BOOL)selectionAtDocumentStart;	// IMP=0x324a9858
- (BOOL)selectionAtSentenceStart;	// IMP=0x324a9860
- (BOOL)selectionAtWordStart;	// IMP=0x324a9868
- (struct _NSRange)selectionRange;	// IMP=0x324a9878
- (void)setCaretChangeListener:(id)fp8;	// IMP=0x324a98a8
- (void)setEditingDelegate:(id)fp8;	// IMP=0x324a9908
- (void)setMarkedText:(id)fp8;	// IMP=0x324a97bc
- (void)setSecure:(BOOL)fp8;	// IMP=0x324a9914
- (void)setText:(id)fp8;	// IMP=0x324a9898
- (void)setupPlaceholderTextIfNeeded;	// IMP=0x324a98fc
- (BOOL)spaceFollowsWordInRange:(id)fp8;	// IMP=0x324a9840
- (void)takeTraitsFrom:(id)fp8;	// IMP=0x324a9630
- (id)text;	// IMP=0x324a989c
- (struct CGColor *)textColorForCaretSelection;	// IMP=0x324a97e8
- (id)textTraits;	// IMP=0x324a95e4
- (void)updateSelectionWithPoint:(struct CGPoint)fp8;	// IMP=0x324a98a4
- (id)wordContainingCaretSelection;	// IMP=0x324a9824
- (id)wordInRange:(id)fp8;	// IMP=0x324a982c
- (int)wordOffsetInRange:(id)fp8;	// IMP=0x324a9838
- (id)wordRangeContainingCaretSelection;	// IMP=0x324a981c

@end

