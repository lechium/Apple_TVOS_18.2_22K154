//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID, NSValue;
@protocol TUScreenShareAttributes;

@protocol TUScreenShareAttributes <NSObject, NSSecureCoding>
+ (NSValue *)defaultSystemRootLayerTransform;
+ (NSNumber *)defaultCornerRadius;
+ (NSNumber *)defaultScaleFactor;
+ (NSNumber *)defaultDisplayScale;
+ (long long)currentDeviceHomeButtonType;
+ (long long)currentDeviceFamily;
+ (id)defaultAttributes;
@property(retain, nonatomic) NSUUID *windowUUID;
@property(nonatomic, getter=isWindowed) _Bool windowed;
@property(retain, nonatomic) NSNumber *displayID;
@property(retain, nonatomic) NSNumber *frameRate;
@property(retain, nonatomic) NSValue *originalResolution;
@property(retain, nonatomic) NSValue *systemRootLayerTransform;
@property(retain, nonatomic) NSNumber *cornerRadius;
@property(retain, nonatomic) NSNumber *scaleFactor;
@property(retain, nonatomic) NSNumber *displayScale;
@property(nonatomic) long long style;
@property(nonatomic) long long deviceHomeButtonType;
@property(nonatomic) long long deviceFamily;
- (id)initWithAttributes:(id <TUScreenShareAttributes>)arg1;
- (_Bool)isSignificantChangeFromAttributes:(id <TUScreenShareAttributes>)arg1;
@end

