/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol ECMimePart <NSObject>
@property (nonatomic,copy,readonly) NSString * mimeSubtype; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) unsigned long long totalTextSize; 
@required
-(NSString *)mimeType;
-(unsigned long long)totalTextSize;
-(NSString *)mimeSubtype;

@end

