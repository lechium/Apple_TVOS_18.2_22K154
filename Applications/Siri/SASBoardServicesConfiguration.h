//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SASBoardServicesConfiguration : NSObject
{
    NSString *_machServiceIdentifier;	// 8 = 0x8
    NSString *_presentationDomain;	// 16 = 0x10
    NSString *_presentationIdentifier;	// 24 = 0x18
    NSString *_signalDomain;	// 32 = 0x20
    NSString *_signalIdentifier;	// 40 = 0x28
}

+ (id)configuration;	// IMP=0x004000000004a8cc
+ (id)new;	// IMP=0x001000000004a8c4
- (void).cxx_destruct;	// IMP=0x002000000004aa2a
@property(retain, nonatomic) NSString *signalIdentifier; // @synthesize signalIdentifier=_signalIdentifier;
@property(retain, nonatomic) NSString *signalDomain; // @synthesize signalDomain=_signalDomain;
@property(retain, nonatomic) NSString *presentationIdentifier; // @synthesize presentationIdentifier=_presentationIdentifier;
@property(retain, nonatomic) NSString *presentationDomain; // @synthesize presentationDomain=_presentationDomain;
@property(retain, nonatomic) NSString *machServiceIdentifier; // @synthesize machServiceIdentifier=_machServiceIdentifier;
- (id)identifierForService:(long long)arg1;	// IMP=0x001000000004a96a
- (MISSING_TYPE *)domainForService: /* Error: Ran out of types for this method. */;	// IMP=0x001000000004a931
- (id)init;	// IMP=0x001000000004a8b6
- (id)_init;	// IMP=0x001000000004a808

@end

