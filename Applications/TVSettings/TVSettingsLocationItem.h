//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, TVImageProxy;

@interface TVSettingsLocationItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_explanatoryText;	// 16 = 0x10
    TVImageProxy *_image;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    unsigned long long _accessType;	// 40 = 0x28
    NSArray *_allowedAccessTypes;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    NSDictionary *_info;	// 64 = 0x40
}

+ (id)appSystemServices;	// IMP=0x0040000000092119
+ (id)allowedSystemServices;	// IMP=0x0010000000091feb
- (void).cxx_destruct;	// IMP=0x0020000000092af1
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *allowedAccessTypes; // @synthesize allowedAccessTypes=_allowedAccessTypes;
@property(nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TVImageProxy *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *explanatoryText; // @synthesize explanatoryText=_explanatoryText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithInfo:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000921d3
- (id)init;	// IMP=0x00100000000921bd

@end

