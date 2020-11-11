/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLanguageDetection : NSObject
+(id)detectLanguageFromTextHeuristically:(id)arg1 ;
+(id)languageForLocaleIdentifier:(id)arg1 ;
+(id)_dominantLanguageTagFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 hints:(SCD_Struct_PA2*)arg4 hintsCount:(unsigned long long)arg5 ;
+(id)detectLanguageFromTextIfMultilingual:(id)arg1 ;
+(SCD_Struct_PA2*)_hintsForLanguageIds:(id)arg1 totalProbability:(float)arg2 ;
+(id)_dominantLanguageTagFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
+(id)detectLanguageFromText:(id)arg1 ;
+(int)_languageIdForLanguageString:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 ;
+(id)defaultLanguage;
+(id)detectLanguageFromLanguageTags:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 minimumCount:(unsigned long long)arg2 minimumAgreement:(double)arg3 ;
+(id)languageStringForLanguageId:(int)arg1 ;
+(id)detectLanguageFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
+(BOOL)_userIsMultilingual;
+(id)dominantLanguageTagFromText:(id)arg1 ;
+(id)userLanguages;
+(id)userLanguagesWithKeyboardDefaults:(id)arg1 ;
+(id)detectLanguageFromTextHeuristicallyWithLanguages:(id)arg1 languages:(id)arg2 defaultLanguage:(id)arg3 ;
@end
