/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoTrustSummaryController : UITableViewController {
    <CertInfoTrustSummaryControllerDelegate> *_delegate;
    <CertInfoTrustDescription> *_description;
    UITableViewCell *_descriptionCell;
    UIBarButtonItem *_doneButton;
    UITableViewCell *_headerCell;
    unsigned int _showsDoneButton;
}

@property (nonatomic) <CertInfoTrustSummaryControllerDelegate> *delegate;
@property (nonatomic) BOOL showsDoneButton;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;
- (id)_descriptionCell;
- (void)_doneButtonPressed:(id)arg1;
- (id)_headerCell;
- (id)delegate;
- (id)initWithTrustDescription:(id)arg1;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showsDoneButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end
