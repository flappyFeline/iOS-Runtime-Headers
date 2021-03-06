/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentOptionGroupItem : NSObject {
    BOOL _deletable;
    NSString *_detail;
    BOOL _editable;
    NSString *_groupType;
    id _referenceObject;
    BOOL _selectable;
    NSString *_title;
}

@property (getter=isDeletable, nonatomic) BOOL deletable;
@property (nonatomic, readonly) NSString *detail;
@property (getter=isEditable, nonatomic) BOOL editable;
@property (nonatomic, readonly) NSString *groupType;
@property (nonatomic, readonly) id referenceObject;
@property (getter=isSelectable, nonatomic) BOOL selectable;
@property (nonatomic, readonly) Class tableViewCellClass;
@property (nonatomic, readonly) NSString *title;

+ (id)_singleLineGroupTypes;

- (void)dealloc;
- (id)detail;
- (id)groupType;
- (unsigned int)hash;
- (id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4;
- (BOOL)isDeletable;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOptionGroupItem:(id)arg1;
- (BOOL)isSelectable;
- (id)referenceObject;
- (void)setDeletable:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (Class)tableViewCellClass;
- (id)title;

@end
