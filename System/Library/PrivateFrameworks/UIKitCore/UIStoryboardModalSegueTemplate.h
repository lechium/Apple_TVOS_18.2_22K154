//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegueTemplate
{
    _Bool _useDefaultModalPresentationStyle;	// 8 = 0x8
    _Bool _useDefaultModalTransitionStyle;	// 9 = 0x9
    long long _modalPresentationStyle;	// 16 = 0x10
    long long _modalTransitionStyle;	// 24 = 0x18
}

@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) _Bool useDefaultModalTransitionStyle; // @synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle;
@property(nonatomic) _Bool useDefaultModalPresentationStyle; // @synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;	// IMP=0x00000000012828b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001282809
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001282714

@end

