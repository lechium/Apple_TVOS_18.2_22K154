//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSEndpointerMetrics, CSEndpointerProxy;
@protocol CSAttSiriNode;

@protocol CSAttSiriEndpointerNodeDelegate <NSObject>
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didDetectStartpointAtTime:(double)arg2;
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(CSEndpointerMetrics *)arg3 usesAutomaticEndPointing:(_Bool)arg4;

@optional
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 registerEndpointerProxy:(CSEndpointerProxy *)arg2;
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didDetectEndpointEventAtTime:(double)arg2 eventType:(long long)arg3 withMetrics:(CSEndpointerMetrics *)arg4 useEndpointerSignal:(_Bool)arg5;
@end

