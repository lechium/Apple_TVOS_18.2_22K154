//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UISEPerTypeEdgesFailGestureFeature
{
    NSDictionary *_edgeTypeSubfeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000041f07f
@property(readonly, nonatomic) NSDictionary *edgeTypeSubfeatures; // @synthesize edgeTypeSubfeatures=_edgeTypeSubfeatures;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x000000000041efc9
- (id)debugDictionary;	// IMP=0x000000000041ed35
- (void)featureDidChangeState:(id)arg1;	// IMP=0x000000000041ecf4
@property(readonly, nonatomic) unsigned long long touchedEdges;
- (id)initWithEdgeTypeSubfeatures:(id)arg1;	// IMP=0x000000000041e976

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

