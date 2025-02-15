//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDLetMeInRequestorKeyAgreement, NSDate, NSUUID, TUConversation, TUConversationLink, TUConversationMember, TUHandle;
@protocol OS_dispatch_queue;

@interface CSDPendingConversation : NSObject
{
    _Bool _videoEnabled;	// 8 = 0x8
    _Bool _audioEnabled;	// 9 = 0x9
    _Bool _uplinkMuted;	// 10 = 0xa
    _Bool _video;	// 11 = 0xb
    NSUUID *_temporaryGroupUUID;	// 16 = 0x10
    TUConversationLink *_link;	// 24 = 0x18
    NSDate *_dateCreated;	// 32 = 0x20
    long long _letMeInRequestState;	// 40 = 0x28
    TUConversationMember *_localMember;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSUUID *_conversationGroupUUID;	// 64 = 0x40
    CSDLetMeInRequestorKeyAgreement *_letMeInKeyAgreement;	// 72 = 0x48
    TUHandle *_approverHandle;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000069ccc
@property(retain, nonatomic) TUHandle *approverHandle; // @synthesize approverHandle=_approverHandle;
@property(retain, nonatomic) CSDLetMeInRequestorKeyAgreement *letMeInKeyAgreement; // @synthesize letMeInKeyAgreement=_letMeInKeyAgreement;
@property(retain, nonatomic) NSUUID *conversationGroupUUID; // @synthesize conversationGroupUUID=_conversationGroupUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted; // @synthesize uplinkMuted=_uplinkMuted;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) TUConversationMember *localMember; // @synthesize localMember=_localMember;
@property(nonatomic) long long letMeInRequestState; // @synthesize letMeInRequestState=_letMeInRequestState;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) TUConversationLink *link; // @synthesize link=_link;
@property(readonly, nonatomic) NSUUID *temporaryGroupUUID; // @synthesize temporaryGroupUUID=_temporaryGroupUUID;
@property(readonly, copy, nonatomic) TUConversation *tuConversation;
- (id)groupUUID;	// IMP=0x00100000000696fa
- (id)UUID;	// IMP=0x00100000000696e8
@property(readonly, nonatomic) long long state;
- (id)description;	// IMP=0x0010000000069479
- (id)initWithConversationLink:(id)arg1 localMember:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000069345

@end

