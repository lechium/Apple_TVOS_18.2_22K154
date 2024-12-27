//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaLibraryOperation.h"

@class TVHKMediaEntitiesSearchRequest, TVHKMediaEntitiesSearchResponse;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibrarySearchRequestOperation : TVHKMediaLibraryOperation
{
    TVHKMediaEntitiesSearchResponse *_response;	// 8 = 0x8
    TVHKMediaEntitiesSearchRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003bda6
@property(copy, nonatomic) TVHKMediaEntitiesSearchRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) TVHKMediaEntitiesSearchResponse *response; // @synthesize response=_response;
- (void)executionDidBegin;	// IMP=0x000000000003bb90
- (id)initWithMediaLibrary:(id)arg1 request:(id)arg2;	// IMP=0x000000000003bb0c
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000000003ba9d

@end

