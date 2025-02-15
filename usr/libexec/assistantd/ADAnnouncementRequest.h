//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFRequestInfo, NSDate, NSUUID, SAStartLocalRequest;

@interface ADAnnouncementRequest : NSObject
{
    _Bool _requestWasInterrupted;	// 8 = 0x8
    _Bool _shouldSkipTriggerlessReply;	// 9 = 0x9
    _Bool _requiresOpportuneTime;	// 10 = 0xa
    _Bool _requestSupportsBargeIn;	// 11 = 0xb
    NSUUID *_announcementIdentifier;	// 16 = 0x10
    AFRequestInfo *_requestInfo;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    unsigned long long _requestType;	// 40 = 0x28
    long long _platform;	// 48 = 0x30
    NSDate *_timeOfRequestArrival;	// 56 = 0x38
    SAStartLocalRequest *_startLocalRequest;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000fe371
@property(nonatomic) _Bool requestSupportsBargeIn; // @synthesize requestSupportsBargeIn=_requestSupportsBargeIn;
@property(retain, nonatomic) SAStartLocalRequest *startLocalRequest; // @synthesize startLocalRequest=_startLocalRequest;
@property(nonatomic) _Bool requiresOpportuneTime; // @synthesize requiresOpportuneTime=_requiresOpportuneTime;
@property(nonatomic) _Bool shouldSkipTriggerlessReply; // @synthesize shouldSkipTriggerlessReply=_shouldSkipTriggerlessReply;
@property(readonly, nonatomic) NSDate *timeOfRequestArrival; // @synthesize timeOfRequestArrival=_timeOfRequestArrival;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool requestWasInterrupted; // @synthesize requestWasInterrupted=_requestWasInterrupted;
@property(retain, nonatomic) AFRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(readonly, nonatomic) NSUUID *announcementIdentifier; // @synthesize announcementIdentifier=_announcementIdentifier;
- (void)dealloc;	// IMP=0x00100000000fe1bb
- (void)completeRequestWithSuccess:(_Bool)arg1 forReason:(long long)arg2 shouldEmitInstrumentationEvent:(_Bool)arg3;	// IMP=0x00100000000fe163
- (id)initWithRemoteAnnouncement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fdfec
- (id)initWithAnnouncementRequestType:(unsigned long long)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fdf2e
- (id)_initWithAnnouncementRequestType:(unsigned long long)arg1 platform:(long long)arg2 announcementIdentifier:(id)arg3 timeOfRequestArrival:(id)arg4 startLocalRequest:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000fdd8e

@end

