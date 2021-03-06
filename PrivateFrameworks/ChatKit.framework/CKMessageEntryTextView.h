/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryTextView : UITextView {
    NSString *_autocorrectionContext;
    UILabel *_placeholderLabel;
    NSString *_responseContext;
    BOOL _showingDictationPlaceholder;
}

@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic, copy) NSAttributedString *compositionText;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic, copy) NSString *responseContext;
@property (getter=isShowingDictationPlaceholder, nonatomic) BOOL showingDictationPlaceholder;
@property (getter=isSingleLine, nonatomic, readonly) BOOL singleLine;

- (id)autocorrectionContext;
- (id)compositionText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (BOOL)isShowingDictationPlaceholder;
- (BOOL)isSingleLine;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)placeholderText;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)responseContext;
- (void)setAttributedText:(id)arg1;
- (void)setAutocorrectionContext:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setShowingDictationPlaceholder:(BOOL)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateTextView;

@end
