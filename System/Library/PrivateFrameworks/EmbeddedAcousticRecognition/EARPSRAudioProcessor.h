//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EARPSRAudioProcessorDelegate, OS_dispatch_queue;

@interface EARPSRAudioProcessor : NSObject
{
    struct shared_ptr<quasar::PSRAudioProcessor> _audioProcessor;	// 8 = 0x8
    struct SystemConfig _sysConfig;	// 24 = 0x18
    unsigned long long _sampleRate;	// 1568 = 0x620
    NSString *_configRoot;	// 1576 = 0x628
    id <EARPSRAudioProcessorDelegate> _delegate;	// 1584 = 0x630
    NSObject<OS_dispatch_queue> *_queue;	// 1592 = 0x638
    unsigned long long _batchSize;	// 1600 = 0x640
}

+ (void)initialize;	// IMP=0x00600000005fa222
- (id).cxx_construct;	// IMP=0x00000000005faf4d
- (void).cxx_destruct;	// IMP=0x00000000005faf01
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <EARPSRAudioProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *configRoot; // @synthesize configRoot=_configRoot;
- (void)dealloc;	// IMP=0x00000000005fadc3
- (void)_startComputeTask;	// IMP=0x00000000005fa8b0
- (void)resetForNewRequest;	// IMP=0x00000000005fa788
- (void)endAudio;	// IMP=0x00000000005fa727
- (void)addAudio:(id)arg1;	// IMP=0x00000000005fa6a5
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x00000000005fa2fb
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4;	// IMP=0x00000000005fa270

@end

