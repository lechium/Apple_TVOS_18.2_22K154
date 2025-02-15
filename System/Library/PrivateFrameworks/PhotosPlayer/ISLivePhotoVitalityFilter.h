//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ISVitalitySettings;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityFilter : NSObject
{
    _Bool _isPerformingInputChanges;	// 8 = 0x8
    _Bool __shouldUpdateOutput;	// 9 = 0x9
    id <ISVitalitySettings> _settings;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    CDUnknownBlockType _outputChangeHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013ca5
@property(nonatomic, setter=_setShouldUpdateOutput:) _Bool _shouldUpdateOutput; // @synthesize _shouldUpdateOutput=__shouldUpdateOutput;
@property(nonatomic, setter=_setPerformingInputChanges:) _Bool isPerformingInputChanges; // @synthesize isPerformingInputChanges=_isPerformingInputChanges;
@property(copy, nonatomic) CDUnknownBlockType outputChangeHandler; // @synthesize outputChangeHandler=_outputChangeHandler;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) id <ISVitalitySettings> settings; // @synthesize settings=_settings;
- (void)updateOutput;	// IMP=0x0000000000013c40
- (void)invalidateOutput;	// IMP=0x0000000000013c29
- (void)performInputChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013b96
- (void)setState:(long long)arg1;	// IMP=0x0000000000013b18
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000013aad
- (id)init;	// IMP=0x0000000000013a99

@end

