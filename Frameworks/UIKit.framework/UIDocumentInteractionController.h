/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBarButtonItem, NSURL, _UIPreviewItemProxy, UIActionSheet, <UIDocumentInteractionControllerDelegate>, UIView, NSString, UIPopoverController, UIViewController, NSArray;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
    <UIDocumentInteractionControllerDelegate> *_delegate;
    id _previewItemProxy;
    NSArray *_icons;
    id _annotation;
    NSString *_uniqueIdentifier;
    UIPopoverController *_popoverController;
    UIViewController *_presentingViewController;
    id _previewController;
    NSArray *_gestureRecognizers;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _presentRect;
    UIView *_presentView;
    UIBarButtonItem *_presentItem;
    NSArray *_availableApplications;
    UIViewController *_openInViewController;
    UIActionSheet *_optionsMenu;
    UIActionSheet *_openInMenu;
    int _quickLookButtonIndex;
    int _defaultOpenButtonIndex;
    int _alternateOpenButtonIndex;
    int _copyButtonIndex;
    int _printButtonIndex;
    struct CGSize { 
        float width; 
        float height; 
    } _openInTableViewSize;
    BOOL _shouldUnzipDocument;
    NSURL *_unzippedDocumentURL;
    id _applicationToOpen;
    struct { 
        unsigned int delegateViewControllerForPreview : 1; 
        unsigned int delegateRectForPreview : 1; 
        unsigned int delegateViewForPreview : 1; 
        unsigned int transitionImageForPreview : 1; 
        unsigned int delegateWillBeginPreview : 1; 
        unsigned int delegateDidEndPreviewPreview : 1; 
        unsigned int delegateWillPresentOptionsMenu : 1; 
        unsigned int delegateDidDismissOptionsMenu : 1; 
        unsigned int delegateWillPresentOpenInMenu : 1; 
        unsigned int delegateDidDismissOpenInMenu : 1; 
        unsigned int delegateWillBeginSendingToApplication : 1; 
        unsigned int delegateDidEndSendingToApplication : 1; 
        unsigned int delegateCanPerformAction : 1; 
        unsigned int delegatePerformAction : 1; 
        unsigned int delegateUnzipURL : 1; 
    } _documentInteractionControllerFlags;
}

@property(readonly) id previewController;
@property(readonly) UIPopoverController * popoverController;
@property(readonly) _UIPreviewItemProxy * previewItemProxy;
@property <UIDocumentInteractionControllerDelegate> * delegate;
@property(retain) NSURL * URL;
@property(copy) NSString * UTI;
@property(copy) NSString * name;
@property(readonly) NSArray * icons;
@property(retain) id annotation;
@property(readonly) NSArray * gestureRecognizers;
@property(retain) NSString * uniqueIdentifier;
@property BOOL shouldUnzipDocument;

+ (id)interactionControllerWithURL:(id)arg1;
+ (struct dispatch_queue_s { }*)_unzippingQueue;
+ (id)_applicationsForFilename:(id)arg1 UTI:(id)arg2;
+ (id)_UTIForFilename:(id)arg1;
+ (void)initialize;

- (void)setDelegate:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (unsigned int)applicationCount;
- (void)dismissPreviewAnimated:(BOOL)arg1;
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldUnzipDocument;
- (void)setUTI:(id)arg1;
- (void)setPreviewURLOverride:(id)arg1;
- (void)_presentOpenInForPhoneInView:(id)arg1;
- (void)updatePopoverContentSizeForPresentationOfTableViewHack;
- (id)presentingNavigationController;
- (BOOL)_canUnzipDocumentAndPresentOptions;
- (BOOL)_canPreviewUnzippedDocument;
- (id)UTI;
- (void)setShouldUnzipDocument:(BOOL)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)_documentNeedsHelpUnzippingForPreview;
- (BOOL)_canUnzipDocument;
- (id)_unzippedDocumentURL;
- (void)_setUnzippedDocumentURL:(id)arg1;
- (void)_interfaceOrientationWillChange:(id)arg1;
- (void)_unzipFileAndSetupPayload:(id)arg1;
- (BOOL)_setupPreviewController;
- (BOOL)_setupForOpenInMenu;
- (BOOL)_setupForOptionsMenu;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)_presentOptionsMenu:(id)arg1;
- (void)_presentOpenIn:(id)arg1;
- (void)_presentPreview:(id)arg1;
- (id)previewController;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (BOOL)_isValidURL:(id)arg1;
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id*)arg1;
- (id)_applicationToOpen;
- (void)_finishedCopyingResource;
- (id)annotation;
- (BOOL)_isFilenameValidForUnzipping:(id)arg1;
- (BOOL)presentOptionsMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)_openDocumentWithApplication:(id)arg1;
- (BOOL)presentOpenInMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)openDocumentWithDefaultApplication;
- (BOOL)presentPreviewAnimated:(BOOL)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewItemProxy;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)popoverController;
- (void)_openDocumentWithCurrentApplication;
- (void)_setApplicationToOpen:(id)arg1;
- (id)_applications:(BOOL)arg1;
- (void)_invalidate;
- (void)setURL:(id)arg1;
- (id)icons;
- (id)uniqueIdentifier;
- (id)URL;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)name;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)gestureRecognizers;
- (id)delegate;
- (void)setName:(id)arg1;
- (void)dealloc;

@end