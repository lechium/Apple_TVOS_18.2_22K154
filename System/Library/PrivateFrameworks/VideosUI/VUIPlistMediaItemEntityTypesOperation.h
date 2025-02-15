//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIMediaItemEntityTypesFetchResponse, VUIPlistMediaDatabase;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation
{
    VUIMediaItemEntityTypesFetchResponse *_response;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    VUIPlistMediaDatabase *_database;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bf72e
@property(retain, nonatomic) VUIPlistMediaDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // @synthesize response=_response;
- (void)executionDidBegin;	// IMP=0x00000000001bf358
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000001bf2b7
- (id)init;	// IMP=0x00000000001bf248

@end

