//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SagaImportController : NSObject
{
    _Bool _shouldRestart;	// 8 = 0x8
    _Bool _includesBookmarkable;	// 9 = 0x9
    unsigned int _totalItemCount;	// 12 = 0xc
    unsigned int _currentItemCount;	// 16 = 0x10
    unsigned int _processedItemCount;	// 20 = 0x14
    NSString *_currentPaginationToken;	// 24 = 0x18
    NSMutableDictionary *_mutableCloudIDToLyricsTokenMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001517f8
@property(readonly, nonatomic) NSMutableDictionary *mutableCloudIDToLyricsTokenMap; // @synthesize mutableCloudIDToLyricsTokenMap=_mutableCloudIDToLyricsTokenMap;
@property(readonly, nonatomic) _Bool includesBookmarkable; // @synthesize includesBookmarkable=_includesBookmarkable;
@property(readonly, nonatomic) NSString *currentPaginationToken; // @synthesize currentPaginationToken=_currentPaginationToken;
@property(readonly, nonatomic) unsigned int processedItemCount; // @synthesize processedItemCount=_processedItemCount;
@property(readonly, nonatomic) unsigned int currentItemCount; // @synthesize currentItemCount=_currentItemCount;
@property(readonly, nonatomic) unsigned int totalItemCount; // @synthesize totalItemCount=_totalItemCount;
@property(readonly, nonatomic) _Bool shouldRestart; // @synthesize shouldRestart=_shouldRestart;
- (_Bool)processDAAPFileAtURL:(id)arg1;	// IMP=0x0010000000151695
@property(readonly, nonatomic) NSDictionary *cloudIDToLyricsTokenMap;
- (id)init;	// IMP=0x0010000000151611

@end

