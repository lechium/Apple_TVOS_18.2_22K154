//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WKFormSelectControl
{
    struct RetainPtr<NSObject<WKFormControl>> _control;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000004ab91d
- (void).cxx_destruct;	// IMP=0x00000000004ab8f6
- (id)initWithView:(id)arg1;	// IMP=0x00000000004ab6e7
@property(readonly, nonatomic) NSArray *menuItemTitles;
- (_Bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;	// IMP=0x00000000004aba37
@property(readonly, nonatomic) NSString *selectFormPopoverTitle;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x00000000004ab935

@end

