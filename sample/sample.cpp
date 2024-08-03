#include <include/ik_sol.hpp>
#include <yaml-cpp/yaml.h>
#include <Eigen/Dense>

int main(){
    IKsol iksol;


    return 0;
}

class IK_sol
{
    public:
        std::string ROBOT_NAME;
        std::string BASE_NAME;
        std::string EFF_NAME;
        int LINK_COUNT;
        void ReadParam();
        Eigen::VectorXd IK_numerical();
        Eigen::VectorXd IKsol::ForwardKinematics();
}

void IKsol::ReadParam(){
    YAML::Node config = YAML::LoadFile("../config/config.cpp");
    if(config["robot_name"]){
        std::string ROBOT_NAME = config["robot_name"].as<std::string>();
        std::cout << "robot_name: " << ROBOT_NAME << std::endl;
    }
    if(config["base_link_name"]){
        std::string BASE_NAME = config["base_link_name"].as<std::string>();
        std::cout << "base_link_name: " << BASE_NAME << std::endl;
    }
    if(config["endeffector_name"]){
        std::string EFF_NAME = config["endeffctor_name"].as<std::string>();
        std::cout << "endeffector_name: " << EFF_NAME << std::endl;
    }
    if(config["link_number"]){
        int LINK_COUNT = config["link_number"].as<int>();
        std::cout << "base_link_name: " << LINK_COUNT << std::endl;
    }
}

Eigen::VectorXd IKsol::IK_numerical(Eigen::Vector3d ref_position, Eigen::Matrix3d ref_pose){
    Eigen::VectorXd jointAngle;
    double err = 0;

}

Eigen::VectorXd IKsol::ForwardKinematics(int joint_id){
    std::vector<double> jointAngle(6);
    for(int i=0; i < LINK_COUNT;i++){
        p(j) = p(i) + R(i) * b(j); // p(j) is j-th joint's abs-position vector. R(i) is i-th joint's abs-Rotation matrix.
        R(j) = R(i) * e(a_j, q_j); // b(j) is j-th joint's rel-position. e(x) is Rodriges's equation
    }
}