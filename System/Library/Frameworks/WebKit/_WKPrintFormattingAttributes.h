//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _WKPrintFormattingAttributes : NSObject
{
    unsigned long long _pageCount;	// 8 = 0x8
    ProcessQualified_d1c2bd24 _frameID;	// 16 = 0x10
    struct PrintInfo _printInfo;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000936422
@property(readonly, nonatomic) struct PrintInfo printInfo; // @synthesize printInfo=_printInfo;
@property(readonly, nonatomic) ProcessQualified_d1c2bd24 frameID; // @synthesize frameID=_frameID;
@property(readonly, nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
- (id)initWithPageCount:(unsigned long long)arg1 frameID:(ProcessQualified_d1c2bd24)arg2 printInfo:(struct PrintInfo)arg3;	// IMP=0x000000000093638c

@end

