//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol STExtractorDelegate <NSObject>

@optional
- (void)extractionEnteredPassthroughMode;
- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)setExtractionProgress:(double)arg1;
@end

