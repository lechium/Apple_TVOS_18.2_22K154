//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RPEventRegistration : NSObject
{
    NSString *_eventID;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000b9c5
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;

@end

