//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HBTopShelfImageStackCollectionViewCell
{
    double _stashedRadiosityAmount;	// 8 = 0x8
    _Bool _wantIdleModeBehavior;	// 16 = 0x10
    double _idleModeOffsetSize;	// 24 = 0x18
    CDUnknownBlockType _userInterfaceStyleChangedUpdateBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009d3b9
@property(copy, nonatomic) CDUnknownBlockType userInterfaceStyleChangedUpdateBlock; // @synthesize userInterfaceStyleChangedUpdateBlock=_userInterfaceStyleChangedUpdateBlock;
@property(nonatomic) double idleModeOffsetSize; // @synthesize idleModeOffsetSize=_idleModeOffsetSize;
@property(nonatomic) _Bool wantIdleModeBehavior; // @synthesize wantIdleModeBehavior=_wantIdleModeBehavior;
- (void)_exitIdleMode;	// IMP=0x000000000009d14f
- (void)_enterIdleMode;	// IMP=0x000000000009cd7e
- (void)_updateWithCurrentUserInterfaceStyle;	// IMP=0x000000000009cc96
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000009cbf5
- (void)dealloc;	// IMP=0x000000000009cb29
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009c9d1

@end

