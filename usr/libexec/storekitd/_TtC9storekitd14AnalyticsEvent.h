//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface _TtC9storekitd14AnalyticsEvent : NSObject
{
}

+ (id)name;	// IMP=0x00400000000f7722
+ (void)sendLazy:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f70cd
- (id)init;	// IMP=0x00200000000f79fd
@property(nonatomic, readonly) NSDictionary *payload;
@property(nonatomic, readonly) NSString *eventName;
- (id)createPayload;	// IMP=0x00100000000f7a4b
@property(nonatomic, readonly) _Bool canCreatePayload;

@end

