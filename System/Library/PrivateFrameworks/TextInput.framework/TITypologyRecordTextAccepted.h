/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord {

	TIKeyboardCandidate* _candidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(BOOL)supportsSecureCoding;
-(TIKeyboardCandidate *)candidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)changedText;
-(void)applyToStatistic:(id)arg1 ;
-(id)textSummary;
-(id)initWithCoder:(id)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(id)shortDescription;
@end

