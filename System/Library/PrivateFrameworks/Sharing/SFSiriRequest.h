//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSSpeechRequest;

__attribute__((visibility("hidden")))
@interface SFSiriRequest : NSObject
{
    _Bool _synthesizing;	// 8 = 0x8
    unsigned int _flags;	// 12 = 0xc
    double _delaySecs;	// 16 = 0x10
    id _owner;	// 24 = 0x18
    CDUnknownBlockType _speechCompletion;	// 32 = 0x20
    CDUnknownBlockType _speechStartHandler;	// 40 = 0x28
    VSSpeechRequest *_speechSynthesisRequest;	// 48 = 0x30
    VSSpeechRequest *_speechUtteranceRequest;	// 56 = 0x38
    unsigned long long _startTicks;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000012664d
@property(nonatomic) _Bool synthesizing; // @synthesize synthesizing=_synthesizing;
@property(nonatomic) unsigned long long startTicks; // @synthesize startTicks=_startTicks;
@property(retain, nonatomic) VSSpeechRequest *speechUtteranceRequest; // @synthesize speechUtteranceRequest=_speechUtteranceRequest;
@property(copy, nonatomic) VSSpeechRequest *speechSynthesisRequest; // @synthesize speechSynthesisRequest=_speechSynthesisRequest;
@property(copy, nonatomic) CDUnknownBlockType speechStartHandler; // @synthesize speechStartHandler=_speechStartHandler;
@property(copy, nonatomic) CDUnknownBlockType speechCompletion; // @synthesize speechCompletion=_speechCompletion;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) double delaySecs; // @synthesize delaySecs=_delaySecs;

@end

