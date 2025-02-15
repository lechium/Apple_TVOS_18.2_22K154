//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSUUID, SFSession;

@interface SDSession : NSObject
{
    _Bool _sessionCreated;	// 8 = 0x8
    SFSession *_clientSession;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSData *_dhSecretKey;	// 32 = 0x20
    NSData *_readKey;	// 40 = 0x28
    unsigned long long _readNonce;	// 48 = 0x30
    NSData *_writeKey;	// 56 = 0x38
    unsigned long long _writeNonce;	// 64 = 0x40
    NSUUID *_peerIdentifier;	// 72 = 0x48
    NSMutableArray *_sendDataQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000001900cb
@property(nonatomic) _Bool sessionCreated; // @synthesize sessionCreated=_sessionCreated;
@property(retain, nonatomic) NSMutableArray *sendDataQueue; // @synthesize sendDataQueue=_sendDataQueue;
@property(copy, nonatomic) NSUUID *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
@property(nonatomic) unsigned long long writeNonce; // @synthesize writeNonce=_writeNonce;
@property(copy, nonatomic) NSData *writeKey; // @synthesize writeKey=_writeKey;
@property(nonatomic) unsigned long long readNonce; // @synthesize readNonce=_readNonce;
@property(copy, nonatomic) NSData *readKey; // @synthesize readKey=_readKey;
@property(copy, nonatomic) NSData *dhSecretKey; // @synthesize dhSecretKey=_dhSecretKey;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) SFSession *clientSession; // @synthesize clientSession=_clientSession;
- (id)description;	// IMP=0x001000000018fe44

@end

