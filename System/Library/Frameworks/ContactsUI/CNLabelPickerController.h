//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyGroupItem;

__attribute__((visibility("hidden")))
@interface CNLabelPickerController
{
    CNPropertyGroupItem *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000059d87
@property(readonly, nonatomic) __weak CNPropertyGroupItem *item; // @synthesize item=_item;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000059bf9
- (void)removeCustomItem:(id)arg1;	// IMP=0x0000000000059be0
- (id)titleForPickerItem:(id)arg1;	// IMP=0x0000000000059bc7
- (id)initForPropertyItem:(id)arg1;	// IMP=0x000000000005985d

@end

