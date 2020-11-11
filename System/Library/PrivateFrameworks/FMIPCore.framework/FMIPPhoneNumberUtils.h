/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FMIPCore/FMIPCore-Structs.h>
@interface FMIPPhoneNumberUtils : NSObject
+(id)countryCode;
+(id)normalizedPhoneNumber:(id)arg1 ;
+(id)formatPhoneNumber:(id)arg1 ;
+(BOOL)isEmail:(id)arg1 ;
+(id)unformatPhoneNumber:(id)arg1 ;
+(BOOL)isPhoneNumberValid:(id)arg1 ;
+(BOOL)isPossiblyTruncatedPhoneNumberValid:(id)arg1 ;
+(id)formatFullyQualifiedPhoneNumber:(id)arg1 ;
+(BOOL)updateTextView:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
+(BOOL)updateTextField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
+(id)completeNumberForPhoneNumber:(id)arg1 formatted:(BOOL)arg2 ;
+(id)formattedHandle:(id)arg1 ;
+(BOOL)handle:(id)arg1 matchesHandle:(id)arg2 ;
@end
