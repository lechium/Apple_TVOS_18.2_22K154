//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKSerializableObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableParticipant : EKSerializableObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_emailAddress;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    long long _participantRole;	// 40 = 0x28
    long long _participantStatus;	// 48 = 0x30
    long long _participantType;	// 56 = 0x38
}

+ (id)classesForKey;	// IMP=0x006000000000da4f
- (void).cxx_destruct;	// IMP=0x000000000000e23e
@property(nonatomic) long long participantType; // @synthesize participantType=_participantType;
@property(nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property(nonatomic) long long participantRole; // @synthesize participantRole=_participantRole;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)createAttendee:(id *)arg1;	// IMP=0x000000000000deb3
- (id)initWithParticipant:(id)arg1;	// IMP=0x000000000000dd31

@end

