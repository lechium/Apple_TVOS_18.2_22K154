//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerMenuGroupProvider
{
    NSArray *_children;	// 8 = 0x8
    NSArray *_providers;	// 16 = 0x10
}

+ (id)menuProviderWithTitle:(id)arg1 image:(id)arg2 providers:(id)arg3;	// IMP=0x0060000000173c92
- (void).cxx_destruct;	// IMP=0x0000000000173c61
@property(readonly, copy, nonatomic) NSArray *providers; // @synthesize providers=_providers;
- (id)_combinedMenuElements;	// IMP=0x0000000000173a6d
- (id)children;	// IMP=0x0000000000173a20
- (void)prepareForDisplay;	// IMP=0x00000000001738c7
- (id)initWithTitle:(id)arg1 image:(id)arg2 menuOptions:(unsigned long long)arg3 providers:(id)arg4;	// IMP=0x000000000017382f

@end

