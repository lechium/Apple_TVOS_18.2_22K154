//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _AKMessage : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
}

+ (id)messageFromTransportRepresentation:(id)arg1;	// IMP=0x004000000003bb6e
+ (unsigned long long)typeForMessageWithTransportRepresentation:(id)arg1;	// IMP=0x001000000003bb20
- (void).cxx_destruct;	// IMP=0x002000000003bd19
- (id)transportRepresentation;	// IMP=0x001000000003bd0b
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;	// IMP=0x001000000003bbd6

@end

