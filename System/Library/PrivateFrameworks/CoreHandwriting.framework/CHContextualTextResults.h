/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSArray;

@interface CHContextualTextResults : NSObject {

	NSArray* _textResults;

}

@property (nonatomic,retain) NSArray * textResults;              //@synthesize textResults=_textResults - In the implementation block
-(void)dealloc;
-(id)topTranscription;
-(id)initWithTextResults:(id)arg1 ;
-(id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:(NSRange)arg1 intersectionRanges:(id*)arg2 ;
-(NSArray *)textResults;
-(void)setTextResults:(NSArray *)arg1 ;
@end
