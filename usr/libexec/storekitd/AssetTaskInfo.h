//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AssetPromise, AssetRequestProperties, KeepAlive, NSError, NSProgress, NSString, NSURLRequest, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol OS_nw_activity;

@interface AssetTaskInfo : NSObject
{
    _Bool _ignoreAssetCache;	// 8 = 0x8
    long long _action;	// 16 = 0x10
    unsigned long long _bytesReceived;	// 24 = 0x18
    NSString *_configurationID;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    KeepAlive *_keepAlive;	// 48 = 0x30
    NSString *_logKey;	// 56 = 0x38
    NSURLSessionTaskMetrics *_metrics;	// 64 = 0x40
    NSObject<OS_nw_activity> *_networkActivity;	// 72 = 0x48
    NSProgress *_progress;	// 80 = 0x50
    AssetPromise *_promise;	// 88 = 0x58
    AssetRequestProperties *_properties;	// 96 = 0x60
    NSURLRequest *_request;	// 104 = 0x68
    unsigned long long _requestOffset;	// 112 = 0x70
    NSURLSession *_session;	// 120 = 0x78
    unsigned long long _signpostId;	// 128 = 0x80
    NSURLSessionTask *_task;	// 136 = 0x88
}

+ (id)taskInfoForTask:(id)arg1;	// IMP=0x004000000008d379
+ (void)removeTaskInfo:(id)arg1;	// IMP=0x001000000008d2f5
+ (void)removeAllTaskInfo;	// IMP=0x001000000008d2ba
+ (void)recordTaskInfo:(id)arg1 forTask:(id)arg2;	// IMP=0x001000000008d14c
+ (void)exchangeTaskForTaskInfo:(id)arg1 withTask:(id)arg2;	// IMP=0x001000000008d13a
+ (id)newTaskInfoForTask:(id)arg1;	// IMP=0x001000000008d03b
- (void).cxx_destruct;	// IMP=0x002000000008d5ec
@property(readonly) NSURLSessionTask *task; // @synthesize task=_task;
@property unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property __weak NSURLSession *session; // @synthesize session=_session;
@property unsigned long long requestOffset; // @synthesize requestOffset=_requestOffset;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(retain) AssetRequestProperties *properties; // @synthesize properties=_properties;
@property __weak AssetPromise *promise; // @synthesize promise=_promise;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) NSObject<OS_nw_activity> *networkActivity; // @synthesize networkActivity=_networkActivity;
@property(retain) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
- (void);	// IMP=0x001000000008d47b
@property(retain) KeepAlive *keepAlive; // @synthesize keepAlive=_keepAlive;
@property _Bool ignoreAssetCache; // @synthesize ignoreAssetCache=_ignoreAssetCache;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *configurationID; // @synthesize configurationID=_configurationID;
@property unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property long long action; // @synthesize action=_action;
- (id)initWithTask:(id)arg1;	// IMP=0x001000000008d0a6

@end

