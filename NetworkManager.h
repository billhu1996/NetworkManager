//
//  NetworkManager.h
//  BistuWiFiWidget
//
//  Created by Bill Hu on 16/8/3.
//  Copyright © 2016年 BISTU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>
@import AFNetworking;
//#import "AFNetworking.h"

@interface NetworkManager : NSObject

@property (nonatomic) AFHTTPSessionManager *manager;
@property (nonatomic) NSDictionary *configuration;
@property (nonatomic) NSString *website;
@property (nonatomic) NSString *verfycodeWebsite;
@property (nonatomic) NSString *APIKey;
@property (nonatomic) NSString *token;
@property (nonatomic) NSString *SMSappKey;
@property (nonatomic) NSString *SMSappSecret;
@property (nonatomic) NSDictionary *path;
@property (nonatomic) NSNumber *successCode;
@property (nonatomic) NSNumber *internalErrorCode;

+(instancetype)defaultManager;

- (instancetype)initWithConfiguration:(NSDictionary*)configuration;

- (NSURLSessionDataTask*)GET:(NSString *)key
                    parameters:(NSDictionary *)parameters
                       success:(void (^)(NSDictionary *))success
                       failure:(void (^)(NSError *))failure;
- (NSURLSessionDataTask*)POST:(NSString *)key
                  GETParameters:(NSDictionary *)GETParameters
                 POSTParameters:(NSDictionary *)POSTParameters
                        success:(void (^)(NSDictionary *))success
                        failure:(void (^)(NSError *))failure;
- (NSURLSessionDataTask*)PUT:(NSString *)key
                    parameters:(NSDictionary *)parameters
                       success:(void (^)(NSDictionary *))success
                       failure:(void (^)(NSError *))failure;

@end
