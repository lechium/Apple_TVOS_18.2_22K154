//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKTransitDepartureServiceGapFormatterResult : NSObject
{
    NSString *_format;	// 8 = 0x8
    NSString *_dateDescription;	// 16 = 0x10
    unsigned long long _dateFormat;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010d9cc
@property(readonly, nonatomic) unsigned long long dateFormat; // @synthesize dateFormat=_dateFormat;
@property(readonly, copy, nonatomic) NSString *dateDescription; // @synthesize dateDescription=_dateDescription;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *formattedString;
- (id)initWithFormat:(id)arg1 dateDescription:(id)arg2 dateFormat:(unsigned long long)arg3;	// IMP=0x000000000010d8a5

@end

