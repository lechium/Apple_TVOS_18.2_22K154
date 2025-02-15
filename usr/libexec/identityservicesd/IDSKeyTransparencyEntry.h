//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSKeyTransparencyEntry : NSObject
{
    _Bool _ktCapable;	// 8 = 0x8
    NSData *_pushToken;	// 16 = 0x10
    NSData *_loggableData;	// 24 = 0x18
    NSData *_signedData;	// 32 = 0x20
    NSString *_productName;	// 40 = 0x28
    NSString *_buildVersion;	// 48 = 0x30
    long long _transparencyVersion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000004aa216
@property long long transparencyVersion; // @synthesize transparencyVersion=_transparencyVersion;
@property NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property NSString *productName; // @synthesize productName=_productName;
@property _Bool ktCapable; // @synthesize ktCapable=_ktCapable;
@property(readonly, nonatomic) NSData *signedData; // @synthesize signedData=_signedData;
@property(readonly, nonatomic) NSData *loggableData; // @synthesize loggableData=_loggableData;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (id)description;	// IMP=0x00100000004a9fe1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004a9fd6
- (unsigned long long)hash;	// IMP=0x00100000004a9f20
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004a9ec7
- (_Bool)isEqualToKeyTransparencyEntry:(id)arg1;	// IMP=0x00100000004a9be7
- (id)initWithPushToken:(id)arg1 loggableData:(id)arg2 signedData:(id)arg3;	// IMP=0x00000000004a9b2f

@end

