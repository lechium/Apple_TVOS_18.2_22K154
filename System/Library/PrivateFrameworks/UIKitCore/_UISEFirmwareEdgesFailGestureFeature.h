//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEFirmwareEdgesFailGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    _Bool _hasDoneTest;	// 16 = 0x10
    unsigned long long _touchedEdges;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a720aa
@property(readonly, nonatomic) unsigned long long touchedEdges; // @synthesize touchedEdges=_touchedEdges;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x0000000000a71ff7
- (id)debugDictionary;	// IMP=0x0000000000a71f48
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000a71ed8

@end

