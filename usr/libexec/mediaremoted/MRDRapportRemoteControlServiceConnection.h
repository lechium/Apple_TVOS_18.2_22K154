//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRRapportTransportConnection, NSDate, NSString;
@protocol NSObject;

@interface MRDRapportRemoteControlServiceConnection : NSObject
{
    NSString *_destinationOutputDeviceUID;	// 8 = 0x8
    NSString *_destinationGroupUID;	// 16 = 0x10
    NSString *_sourceUID;	// 24 = 0x18
    NSString *_sessionUID;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    MRRapportTransportConnection *_connection;	// 48 = 0x30
    NSDate *_connectionAttemptDate;	// 56 = 0x38
    id <NSObject> _notificationToken;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000051b30
- (void).cxx_destruct;	// IMP=0x0020000000051ef4
@property(retain, nonatomic) id <NSObject> notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSDate *connectionAttemptDate; // @synthesize connectionAttemptDate=_connectionAttemptDate;
@property(retain, nonatomic) MRRapportTransportConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *sessionUID; // @synthesize sessionUID=_sessionUID;
@property(retain, nonatomic) NSString *sourceUID; // @synthesize sourceUID=_sourceUID;
@property(retain, nonatomic) NSString *destinationGroupUID; // @synthesize destinationGroupUID=_destinationGroupUID;
@property(retain, nonatomic) NSString *destinationOutputDeviceUID; // @synthesize destinationOutputDeviceUID=_destinationOutputDeviceUID;
- (void)dealloc;	// IMP=0x0010000000051d81
- (id)description;	// IMP=0x0010000000051d39
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000051bcd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000051b38

@end

