//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNNode, SCNScene;

@protocol SCNMetalLayerJSExport <JSExport>
@property(nonatomic) _Bool showsStatistics;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) _Bool loops;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) id delegate;
@property(nonatomic) double currentTime;
@property(nonatomic) unsigned long long antialiasingMode;
@property(retain, nonatomic) SCNScene *scene;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
@end

