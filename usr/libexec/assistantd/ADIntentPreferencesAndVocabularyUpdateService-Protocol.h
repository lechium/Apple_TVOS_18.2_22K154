//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INVocabularyUpdateService-Protocol.h"

@protocol ADIntentPreferencesAndVocabularyUpdateService <INVocabularyUpdateService>
- (void)fetchCurrentSiriLanguageCode:(void (^)(NSString *))arg1;
- (void)requestSiriAuthorization:(void (^)(long long))arg1;
- (void)fetchSiriAuthorization:(void (^)(long long))arg1;
@end

