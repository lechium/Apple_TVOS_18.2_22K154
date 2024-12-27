//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol GCHIDElementAttributes
@property(readonly) NSString *name;
@property(readonly) long long unitExponent;
@property(readonly) long long unit;
@property(readonly) unsigned int flags;
@property(readonly) unsigned char hasNullState;
@property(readonly) unsigned char hasPreferredState;
@property(readonly) unsigned char isNonLinear;
@property(readonly) unsigned char isWrapping;
@property(readonly) unsigned char isRelative;
@property(readonly) unsigned char isArray;
@property(readonly) long long reportID;
@property(readonly) unsigned int reportCount;
@property(readonly) long long reportSize;
@property(readonly) long long size;
@property(readonly) long long scaledMax;
@property(readonly) long long scaledMin;
@property(readonly) long long max;
@property(readonly) long long min;
@property(readonly) long long usagePage;
@property(readonly) long long usage;
@property(readonly) int collectionType;
@property(readonly) int type;
@property(readonly) unsigned int elementCookie;
@property(readonly) long long usageTypeIndex;
@property(readonly) long long usageType;
- (id)valueForElementKey:(NSString *)arg1;
@end

