//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTRecognitionSausage, NSArray;

__attribute__((visibility("hidden")))
@interface FTMutableRecognitionResult
{
}

@property(copy, nonatomic) NSArray *choice_alignments;
@property(copy, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
@property(copy, nonatomic) NSArray *post_itn_nbest_choices;
@property(copy, nonatomic) NSArray *pre_itn_nbest_choices;
@property(copy, nonatomic) FTRecognitionSausage *post_itn;
@property(copy, nonatomic) FTRecognitionSausage *pre_itn;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000148d04
- (id)init;	// IMP=0x0000000000148c76

@end

