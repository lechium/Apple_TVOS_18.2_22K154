//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNLabeledValue.h>

@class NSString;

@interface CNLabeledValue (UIAdditions)
+ (id)builtinLabelsForProperty:(id)arg1;	// IMP=0x002000000004b3b1
+ (void)deleteCustomLabel:(id)arg1;	// IMP=0x002000000004b363
+ (id)allCustomLabels;	// IMP=0x002000000004b27d
+ (id)allLabels;	// IMP=0x002000000004b254
+ (id)defaultLabels;	// IMP=0x002000000004b05b
+ (void *)addressBook;	// IMP=0x002000000004afb9
@property(readonly, nonatomic) NSString *localizedLabel;
- (Class)contactViewControllerCellClassForPropertyType:(id)arg1;	// IMP=0x0010000000086f61
@end

