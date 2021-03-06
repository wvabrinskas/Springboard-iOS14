/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKPrivateKey.h>

@class NSData, NSString;

@interface CRKConcretePrivateKey : NSObject <CRKPrivateKey> {

	_SecKey* _underlyingPrivateKey;

}

@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) _SecKey* underlyingPrivateKey;                 //@synthesize underlyingPrivateKey=_underlyingPrivateKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)privateKeyWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSString *)description;
-(void)dealloc;
-(_SecKey*)underlyingPrivateKey;
-(id)initWithPrivateKey:(_SecKey*)arg1 ;
@end

