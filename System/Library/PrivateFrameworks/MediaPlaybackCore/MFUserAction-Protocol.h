//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;
@protocol MFTimeStamp;

@protocol MFUserAction
@property(nonatomic, readonly) NSString *sourceID;
@property(nonatomic, readonly) long long source;
@property(nonatomic, readonly) NSDictionary *options;
@property(nonatomic, readonly) id <MFTimeStamp> timeStamp;
@property(nonatomic, readonly) long long type;
@property(nonatomic, readonly) NSString *identifier;
@end

