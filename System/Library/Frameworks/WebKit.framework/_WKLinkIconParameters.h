/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, NSNumber, NSDictionary;

@interface _WKLinkIconParameters : NSObject {

	RetainPtr<NSURL>* _url;
	long long _iconType;
	RetainPtr<NSString>* _mimeType;
	RetainPtr<NSNumber>* _size;
	RetainPtr<NSMutableDictionary>* _attributes;

}

@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,copy,readonly) NSDictionary * attributes; 
-(NSURL *)url;
-(NSNumber *)size;
-(id)_initWithLinkIcon:(const LinkIcon*)arg1 ;
-(long long)iconType;
-(NSString *)mimeType;
-(NSDictionary *)attributes;
@end

