//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EARKeywordFinder : NSObject
{
    struct unique_ptr<quasar::KeywordFinder, std::default_delete<quasar::KeywordFinder>> _kwf;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00600000003a1361
- (id).cxx_construct;	// IMP=0x00000000003a2493
- (void).cxx_destruct;	// IMP=0x00000000003a2483
- (id)correctedResultWithKeyword:(id)arg1 tokenizedKeyword:(id)arg2 preItnSausage:(id)arg3 preItnOneBest:(id)arg4 preItnOneBestIndices:(id)arg5 nbestSize:(long long)arg6;	// IMP=0x00000000003a14b6
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000003a1389

@end

