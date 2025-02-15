//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSProtobuf, IDSSocketPairMessage, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface IDSLocalDeliveryMessage : NSObject
{
    NSData *_payload;	// 8 = 0x8
    NSString *_fromID;	// 16 = 0x10
    NSString *_topic;	// 24 = 0x18
    NSString *_awdTopic;	// 32 = 0x20
    NSString *_messageUUID;	// 40 = 0x28
    NSNumber *_domainHash;	// 48 = 0x30
    NSNumber *_command;	// 56 = 0x38
    NSString *_toDeviceID;	// 64 = 0x40
    NSString *_toURI;	// 72 = 0x48
    NSDate *_expirationDate;	// 80 = 0x50
    CDUnknownBlockType _completionBlock;	// 88 = 0x58
    CDUnknownBlockType _fallbackBlock;	// 96 = 0x60
    CDUnknownBlockType _progressBlock;	// 104 = 0x68
    unsigned int _messageID;	// 112 = 0x70
    double _timeEnqueued;	// 120 = 0x78
    double _timeSent;	// 128 = 0x80
    long long _priority;	// 136 = 0x88
    unsigned int _dataProtectionClass;	// 144 = 0x90
    _Bool _expectsPeerResponse;	// 148 = 0x94
    _Bool _wantsAppAck;	// 149 = 0x95
    _Bool _nonWaking;	// 150 = 0x96
    _Bool _nonCloudWaking;	// 151 = 0x97
    _Bool _requireBluetooth;	// 152 = 0x98
    _Bool _requireLocalWiFi;	// 153 = 0x99
    _Bool _compressPayload;	// 154 = 0x9a
    _Bool _compressed;	// 155 = 0x9b
    _Bool _didWakeHint;	// 156 = 0x9c
    NSString *_peerResponseIdentifier;	// 160 = 0xa0
    NSString *_queueOneIdentifier;	// 168 = 0xa8
    IDSSocketPairMessage *_underlyingSocketPairMessage;	// 176 = 0xb0
    _Bool _isSending;	// 184 = 0xb8
    _Bool _fullyAckd;	// 185 = 0xb9
    IDSProtobuf *_protobuf;	// 192 = 0xc0
    unsigned long long _sentMessageDataSize;	// 200 = 0xc8
    _Bool _didFallback;	// 208 = 0xd0
    NSString *_resourcePath;	// 216 = 0xd8
    NSDictionary *_resourceMetadata;	// 224 = 0xe0
    _Bool _manualQueueRemoval;	// 232 = 0xe8
    _Bool _deniedToSend;	// 233 = 0xe9
    _Bool _shouldEnforceRemoteTimeout;	// 234 = 0xea
    NSArray *_duetIdentifiersOverride;	// 240 = 0xf0
    _Bool _bypassDuet;	// 248 = 0xf8
    unsigned long long _minCompatibilityVersion;	// 256 = 0x100
    long long _messageType;	// 264 = 0x108
    long long _messageState;	// 272 = 0x110
}

+ (id)socketPairMessageWithCommand:(long long)arg1 streamID:(unsigned short)arg2 sequenceNumber:(unsigned int)arg3 messageID:(unsigned int)arg4 expectsPeerResponse:(_Bool)arg5 wantsAppAck:(_Bool)arg6 compressPayload:(_Bool)arg7 compressed:(_Bool)arg8 didWakeHint:(_Bool)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 payload:(id)arg12 protobuf:(id)arg13 resourcePath:(id)arg14 resourceMetadata:(id)arg15 expiryDate:(id)arg16;	// IMP=0x00400000002131f4
+ (unsigned char)_niceToSocketCommand:(long long)arg1;	// IMP=0x0010000000212f72
- (void).cxx_destruct;	// IMP=0x0020000000213b06
@property(copy, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) long long messageState; // @synthesize messageState=_messageState;
@property(retain, nonatomic) IDSSocketPairMessage *underlyingSocketPairMessage; // @synthesize underlyingSocketPairMessage=_underlyingSocketPairMessage;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned long long minCompatibilityVersion; // @synthesize minCompatibilityVersion=_minCompatibilityVersion;
@property(nonatomic) _Bool bypassDuet; // @synthesize bypassDuet=_bypassDuet;
@property(retain, nonatomic) NSArray *duetIdentifiersOverride; // @synthesize duetIdentifiersOverride=_duetIdentifiersOverride;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(nonatomic) _Bool shouldEnforceRemoteTimeout; // @synthesize shouldEnforceRemoteTimeout=_shouldEnforceRemoteTimeout;
@property(nonatomic) _Bool deniedToSend; // @synthesize deniedToSend=_deniedToSend;
@property(nonatomic) _Bool manualQueueRemoval; // @synthesize manualQueueRemoval=_manualQueueRemoval;
@property(retain, nonatomic) NSDictionary *resourceMetadata; // @synthesize resourceMetadata=_resourceMetadata;
@property(retain, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(nonatomic) _Bool requireLocalWiFi; // @synthesize requireLocalWiFi=_requireLocalWiFi;
@property(nonatomic) _Bool requireBluetooth; // @synthesize requireBluetooth=_requireBluetooth;
@property(copy, nonatomic) NSString *queueOneIdentifier; // @synthesize queueOneIdentifier=_queueOneIdentifier;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) _Bool didFallback; // @synthesize didFallback=_didFallback;
@property(nonatomic) unsigned long long sentMessageDataSize; // @synthesize sentMessageDataSize=_sentMessageDataSize;
@property(retain, nonatomic) IDSProtobuf *protobuf; // @synthesize protobuf=_protobuf;
@property(readonly, nonatomic) _Bool isDoneSending; // @synthesize isDoneSending=_fullyAckd;
@property(retain, nonatomic) NSNumber *command; // @synthesize command=_command;
@property(nonatomic) double timeSent; // @synthesize timeSent=_timeSent;
@property(nonatomic) double timeEnqueued; // @synthesize timeEnqueued=_timeEnqueued;
@property(copy, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(nonatomic) _Bool didWakeHint; // @synthesize didWakeHint=_didWakeHint;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic) _Bool compressPayload; // @synthesize compressPayload=_compressPayload;
@property(nonatomic) _Bool nonCloudWaking; // @synthesize nonCloudWaking=_nonCloudWaking;
@property(nonatomic) _Bool nonWaking; // @synthesize nonWaking=_nonWaking;
@property(nonatomic) _Bool wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property(nonatomic) _Bool expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property(retain, nonatomic) NSString *toURI; // @synthesize toURI=_toURI;
@property(retain, nonatomic) NSString *toDeviceID; // @synthesize toDeviceID=_toDeviceID;
@property(retain, nonatomic) NSNumber *domainHash; // @synthesize domainHash=_domainHash;
@property(copy, nonatomic) NSString *awdTopic; // @synthesize awdTopic=_awdTopic;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(copy, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (id)socketPairMessage;	// IMP=0x0010000000212cc1
- (void)processAckForSocketPairMessage:(id)arg1;	// IMP=0x0010000000212ca9
- (void)kickProgressBlock;	// IMP=0x0010000000212b56
- (id)init;	// IMP=0x0010000000212a04

@end

