/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SFCodingOptions;

@interface SFCoder : NSObject {

	id _coderInternal;

}

@property (nonatomic,copy) SFCodingOptions * options; 
-(id)initWithOptions:(id)arg1 ;
-(void)setOptions:(SFCodingOptions *)arg1 ;
-(SFCodingOptions *)options;
-(id)encodeTopLevelValue:(id)arg1 error:(id*)arg2 ;
@end

